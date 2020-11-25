#include "std_lib_facilities.h"

/*Programming: Principles and Practice Using C++ 2nd Edition.
* Stroustrup, Peter
Part1: The Basics of programming
2. - Stroustroup Hello, World!*/

void hello_world_drill1()
{
    cout << "Hello, World!\n";
}

/* exercises 1*/

void exercise0101()
{
    cout << "Hello, programming!\nHere we go!";
}

void exercise0102()
{
    cout << "Como achar o banheiro na parte de cima\n";
    cout << "do restaurante\n";
    cout << "\n";
    cout << "Levante-se da cadeira\n";
    cout << "Siga em frente e suba as escadas\n";
    cout << "quando chegar no descanso de escada vire a esquerda\n";
    cout << "dê dois passos e vire a esquerda novamente\n";
    cout << "suba o restante da escada\n";
    cout << "vire para direita\n";
    cout << "siga em frente\n";
    cout << "quando chegar a porta abra a porta\n";
    cout << "\n";
}

void exercise0103()
{
    cout << "Como ir do quarto até o quintal da minha casa\n";
    cout << "\n";
    cout << "vire para a direita\n";
    cout << "siga em frente até não poder mais\n";
    cout << "vire a direita\n";
    cout << "desça seis degrais de escada\n";
    cout << "vire 45 graus para direita\n";
    cout << "sigua em frente até a porta\n";
    cout << "vire mais 45 para a direita\n";
    cout << "dê mais 3 passos\n";
}

void exercise0104()
{
    cout << "Como fazer um Gelado de pêssego\n\n";
    cout << "Pegue um refratário\n";
    cout << "adicione no refratário 1 envelope de gelatina em pó\n";
    cout << " mais cinco colheres de sopa de água fria\n";
    cout << "coloque água em uma panela menor que o refratário\n";
    cout << "leve ao fogão e esquente a panela com a água\n";
    cout << "coloque o refratário em cima da panela\n";
    cout << "aguarde a água esquentar\n";
    cout << "aguarde o vapor da água esquentar a mistura no refratário\n";
    cout << "deixe o refratário aquecido até a mistura dissolver\n";
    cout << "Pegue uma lata de pessêgo em calda\n";
    cout << "abra a late e escorra o líquido\n";
    cout << "adicione no liquidificador os seguintes itens:\n";
    cout << "	o pessêgo retirado da lata\n";
    cout << "	leite condensado da lata\n";
    cout << "	creme de leite da lata\n";
    cout << "	retire a mistura do refratário\n";
    cout << "	meia xícara de água\n";
    cout << "ligue o liquidificador e bata\n";
    cout << "retire a mistura do liquidificador\n";
    cout << "divida a mistura em taças\n";
    cout << "leve as taças à geladeira e aguarde 4 horas\n";
    cout << "\nSirva!\n";

    // TODO build a glossary of terms used.(What's a liquidificador?)
}

/*3. Objects, Types, and Values*/

void input_first_name()
{
    // page 91
    cout << "Please enter your first name (followed by 'enter'):\n";
    string first_name;	// first_name is a variable of type string
    cin >> first_name;	// read charaters into first_name
    cout << "Hello, " << first_name << "!\n";
}

void input_first_name2()
{
    // page 92
    cout << "Please enter your first name (followerd by 'enter'):\n";
    string first_name;
    cin >> first_name;
    cout << "first_name = " << first_name << "\n";
}

void input_and_type()
{
    // page 94
    cout << "Please enter your first name and age\n";
    string first_name;
    int age;
    cin >> first_name;
    cin >> age;
    cout << "Hello, " << first_name << " (age " << age << ")\n";
}

void default_value()
{
    // page 95
    cout << "Please enter your name and age\n";
    string first_name = "???";
    int age = -1;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age " << age << ")\n";
}

void read_more()
{
    // page 95
    cout << "Please enter your first and second names\n";
    string first;
    string second;
    cin >> first >> second;
    cout << "Hello, " << first << " " << second << '\n';
}

void age_in_months()
{
    // page 95
    // try this
    cout << "Please enter your first and age\n";
    string name;
    double age;
    cin >> name >> age;
    cout << "Hello, " << name << " your age in months: " << age*12 << '\n';
}

void float_operators()
{
    // page 97
    cout << "Please enter a floating-point value: ";
    double n;
    cin >> n;
    cout<< "n == " << n
        << "\nn+1 == " << n + 1
        << "\nthree times n == " << 3 * n
        << "\ntwice n == " << n + n
        << "\nn squared == " << n * n
        << "\nhalf of n == " << n / 2
        << "\nsquare root of n == " << sqrt(n)
        << '\n';
}

void exercise_operators()
{
    // page 98
    //try this
    cout << "Please enter a value: ";
    int n;
    cin >> n;
    double f_n = n;
    cout<< "n == " << n
        << "\nn+1 == " << n + 1
        << "\nthree times n == " << 3 * n
        << "\ntwice n == " << n + n
        << "\nn squared == " << n * n
        << "\nhalf of n == " << n / 2
        << "\n remainder of n is == " << n % 2
        << "\nsquare root of n == " << sqrt(f_n)
        << '\n';
}

void concatenate_string()
{
    // page 98
    cout << "Please enter your first second names\n";
    string first;
    string second;
    cin >> first >> second;				// read two strings
    string name = first + ' ' + second; // concatenate strings
    cout << "Hello, " << name << '\n';
}

void compare_names()
{
    cout << "Please enter two names\n";
    string first;
    string second;
    cin >> first >> second;
    if(first == second) cout << "that's the same name twice\n";
    if(first < second)
        cout << first << " is alphabetically before " << second << '\n';
    if (first > second)
        cout << first << " is alphabetically after " << second << '\n';
}

void variable_assign()
{
    // page 99
    int a = 3; // a starts out with the value 3
    a = 4; // a gets the value 4 ("becomes 4")
    int b = a;	// b starts out with a copy of a's valuw(that is, 4)
    b = a + 5;	// b gets the value a+5 (that is, 9)
    a = a + 7; // a gets the value a+7 (that is, 11)
}

void string_assign()
{
    // page 100
    string a = "alpha";	// a starts out with the value "alpha"
    a == "beta"; // a gets the value "beta" (becomes "beta")
    string b = a; // b starts out with a copy of a's value (that is, "beta"
    b = a + "gamma"; // b gets the value a + "gamma" (that is, "betagamma";
    a = a + "delta"; // a gets the value a+"delta" (that is, "betadelta"s
}

void detect_repeated_words()
{
    string previous = " ";
    string current;
    while (cin >> current) {
        if (previous == current)
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
}

void detect_repeated_words2()
{
    // page 103
    // try this 111
    int number_of_words = 0;
    string previous = " ";
    string current;
    while (cin >> current) {
        ++number_of_words;
        if (previous == current)
            cout << "word number " << number_of_words
            << "repeated: " << current << '\n';
        previous = current;
    }
}

void try_this105()
{
    // page 105
    // remove the errors
    string s = "Goodbye, cruel world!";
    cout << s << '\n';
}

void unsafe_conversions()
{
    // 110
    double d = 0;
    while (cin >> d) {
        int i = d;		// try to squeeze a double into an int
        char c = i;		// try to squeeze an int into a char
        int i2 = c;		// get the integer value of the chara cter
        cout << "d==" << d				// the original double
            << "\ni=+" << i				// converted to int
            << "\ni2==" << i2			// int value of char
            << "\nchar(" << c << ")\n";	// the char
    }
}

void drill3()
{
    // page 91
    cout << "(Enter the name of the person you want to write to): ";
    string first_name;
    string friend_name;
    char friend_sex = 0;
    int age = 0;
    cin >> first_name;
    cout << "\n	Dear, " << first_name << "."
        << "\nHow are you? I am fine. I miss you.\n"
        << "Here in Brazil is pretty shit!"
        << "\n(Enter a common friend): ";
    cin >> friend_name;
    cout << "\nHave you seen " << friend_name << " lately?";
    cout << "\n(Enter an m if the friend is male and f if the friend is female): ";
    cin >> friend_sex;
    if (friend_sex == 'f')
        cout << "\nIf you see " << friend_name << ", please ask her to call me.";
    if (friend_sex == 'm')
        cout << "\nIf you see " << friend_name << ", please ask him to call me.";
    cout << "\n(Enter the person age): ";
    cin >> age;
    if (age <= 0 || age >= 110)
        simple_error("\nYou gotta be fucking kiding me!");
    else
        cout << "\nI hear you just had a birthday and you are " << age << " old.";
    if (age <= 12)
        cout << "\nNext year you will be age+1.";
    if (age == 17)
        cout << "\nNext year you will be able to vote.";
    if (age >= 70)
        cout << "\nI hope you are enjoying your retirement fund.";
    cout << "\n\nYour sincerely.___________________________________"
        << "\n__________________________________________________"
        << "\n\n	Daniel Silva dos Santos.\n\n";
}

void miles_to_kilometers()
{
    // page 115
    // exercise 2
    cout << "Enter a mile value: ";
    double mile;
    cin >> mile;
    cout << "That is " << mile * 1.609 << " kilometers.";
}

void two_num_math()
{
    // exercise 4, 5
    double number1;
    double number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter a second number: ";
    cin >> number2;
    if (number1 > number2)
        cout << "\nnumber1 is larger."
             << "\nnumber2 is smaller.";
    if (number1 < number2)
        cout << "\nnumber1 is smaller."
             << "\nnumber2 is larger.";
    if (number1 == number2)
        cout << "\nnumber1 and number2 are the same size.";
    cout << "\nsum: " << number1 + number2;
    cout << "\ndifference: " << number1 - number2;
    cout << "\nproduct: " << number1 * number2;
    cout << "\nratio: " << number1 << ":" << number2 << "\n";
}

void int_sort()
{
    // exercise 6
    int num1;
    int num2;
    int num3;
    int buffer;
    cout << "Enter 3 integer numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2) {
        buffer = num1;
        num1 = num2;
        num2 = buffer;
    }
    if (num2 > num3) {
        buffer = num2;
        num2 = num3;
        num3 = buffer;
    }
    if (num1 > num2) {
        buffer = num1;
        num1 = num2;
        num2 = buffer;
    }
    cout << num1 << ", " << num2 << ", " << num3 << ".\n";
}

void sort_3_strings()
{
    // exercise 7
    string name1;
    string name2;
    string name3;
    string buffer;
    cout << "Enter 3 integer numbers: ";
    cin >> name1 >> name2 >> name3;

    if (name1 > name2) {
        buffer = name1;
        name1 = name2;
        name2 = buffer;
    }
    if (name2 > name3) {
        buffer = name2;
        name2 = name3;
        name3 = buffer;
    }
    if (name1 > name2) {
        buffer = name1;
        name1 = name2;
        name2 = buffer;
    }
    cout << name1 << ", " << name2 << ", " << name3 << ".\n";
}

void odd_or_even()
{
    // exercise 8
    int number;
    cout << "Enter a integer number: ";
    cin >> number;
    if (number % 2)
        cout << "The value " << number << " is an odd number.\n";
    else
        cout << "The value " << number << " is an even number.\n";
}

bool is_even(int number) {
    // return true if is a even number
    if (number % 2 == 0)
        return true;
    else
        return false;
}

bool is_odd(int number) {
    // return true if is a even number
    if (number % 2 > 0)
        return true;
    else
        return false;
}

void spell_to_digits()
{
    // exercise 9
    string number;
    cout << "Enter a number: ";
    cin >> number;
    if (number == "1")
        cout << "\none";
    if (number == "2")
        cout << "\ntwo";
    if (number == "3")
        cout << "\nthree";
    if (number == "4")
        cout << "\nfour";
    if (number == "one")
        cout << "\n1";
    if (number == "two")
        cout << "\n2";
    if (number == "three")
        cout << "\n3";
    if (number == "four")
        cout << "\n4";
}

void shitty_calculator()
{
    string operation;
    double num1;
    double num2;
    cout << "Enter a operator followed by two numbers, put a space to each statement: ";
    cin >> operation >> num1 >> num2;
    if (operation == "+") {
        cout << num1 + num2;
    }
    if (operation == "-") {
        cout << num1 - num2;
    }
    if (operation == "*") {
        cout << num1 * num2;
    }
    if (operation == "/") {
        cout << num1 / num2;
    }
}

void moedas()
{
    // TODO make the coin exercise
}

void money_exchange_if()
{
    // page 130
    constexpr double real_per_dollar = 5.38;
    double monetary_value = 1;

    string unit = "";
    cout << "Please enter a monetary value followed by a unit (BRL or USD):\n";
    cin >> monetary_value >> unit;
    if (unit == "BRL")
        cout << monetary_value << " in == " << real_per_dollar * monetary_value << "BRL\n";
    else if (unit == "USD")
        cout << monetary_value << " in == " << monetary_value / real_per_dollar << "USD\n";
    else
        cout << "Sorry, I don't know a unit called '" << unit << "'\n";
}

void money_exchange_switch()
{
    // page 130
    constexpr double real_per_dollar = 5.38;
    double monetary_value = 1;

    constexpr char USD = 'U';
    constexpr char BRL = 'B';

    char unit = ' ';
    cout << "Please enter a monetary value followed by a unit (B for BRL or U for USD):\n";
    cin >> monetary_value >> unit;

    switch (unit) {
    case BRL:
        cout << monetary_value << " US dollar in == " << real_per_dollar * monetary_value << "BRL\n";
        break;
    case USD:
        cout << monetary_value << " BR real in == " << monetary_value / real_per_dollar << "USD\n";
        break;
    default:
        cout << "Sorry, I don't know a unit called '" << unit << "'\n";
        break;
    }
}

void square_loop()
{
    // page 133
    // TODO
    int i = 0;
    while (i < 10) {
        //cout << i << '\t' << square(i) << '\n';
        ++i;
    }
}

void char_while_loop()
{
    // try this
    // page 134
    int i = 33;
    char c;
    while (i<127) {
        c = i;
        cout << c << '\t' << i << '\n';
        ++i;
    }
}

void char_for_loop()
{
    // try this
    // page 136
    char c;
    for (int i = 33; i < 127; ++i) {
        c = i;
        cout << c << '\t' << i << '\n';
    }
}

int square(int x)
{
    // page 137
    return x * x;
}

void print_square(int x)
{
    // page 138
    cout << x << '\t' << x * x << '\n';
}

int s_square(int x)
{
    // try this
    // page 139
    int re = 0;
    for (int i = 0; i < x; ++i)
        re += x;
    return re;
}

void vector_size()
{
    // page141
    vector<int> v = { 5, 7, 9, 4, 6, 8 };
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << '\n';
}

void half_open_sequence()
{
    // page 141
    vector<int> v = { 5, 7, 9, 4, 6, 8 };
    for (int x:v) // for each x in v
        cout << x << '\n';
}

void growing_vector()
{
    // page 142
    vector<double> v; // start off empty; that is, v has no elements
    v.push_back(2.7); // add an element with the value 2.7 at end ("the back") of v
                      // v now has one element and v[0]==2.7
    v.push_back(5.6);
    v.push_back(7.9);
    cout << "v size: " << v.size() << '\n';
}

void mean_temperatures()
{
    // page 143
    // exercise 2 page 149
    vector<double> temps;			// temperatures
    for (double temp; cin >> temp;)	// read into tem p
        temps.push_back(temp);		// put temp into v ector
    //compute mean temperature:
    double sum = 0;
    for (int x : temps) sum += x;
    cout << "Average temperature: " << sum / temps.size() << '\n';
    // computemedian temperature:
    sort(temps);
    if (is_even(temps.size())) {
        int bad_median = temps.size() / 2;
        temps.insert(temps.begin() + bad_median, (temps[bad_median]+temps[bad_median-1])/2);
        cout << "Median temperatures: " << temps[temps.size() / 2] << '\n';
    }
    else
        cout << "Median temperatures: " << temps[temps.size() / 2] << '\n';
}

void words()
{
    // page 144
    // simple dictionary: list of sorted words
    vector<string> words;
    for (string temp; cin >> temp;)	//read whitespace - separated words
        words.push_back(temp);		// put into vector
    cout << "Number of words: " << words.size() << '\n';

    sort(words);					// sort the words

    for (int i = 0; i < words.size(); ++i)	// is this a new word?
        if (i == 0 || words[i - 1] != words[i])
            cout << words[i] << '\n';
}

void bleeps_words()
{
    // try this
    // page 146
}

void larger_small_number()
{
    // drill
    //page 147
    double num1, num2;
    double differ = 1.0 / 100;
    while (cin >> num1 >> num2) {
        if (num1 > num2) {
            if (num1 - num2 < differ)
                cout << "The numbers are almost equal!" << '\n';
            cout << "The larger value is: " << num1 << '\n'
                << "The smaller value is: " << num2 << '\n';
        }
        else if (num1 < num2) {
            if (num1 - num2 < differ)
                cout << "The numbers are almost equal!" << '\n';
            cout << "The larger value is: " << num2 << '\n'
                << "The smaller value is: " << num1 << '\n';
        }
        else
            cout << "The values are equal";
    }
}

void drill106()
{
    // drill
    //page 147
    double num;
    double larger = 0.0;
    double smaller = 0.0;
    vector<double> sum;
    constexpr double differ = 1.0 / 100;

    string factor;

    constexpr double cm = 1;
    constexpr double m = 100;
    constexpr double in = 2.54;
    constexpr double ft = 12 * in;

    while (cin >> num >> factor) {
        if (factor == "cm" || factor == "CM") {
            sum.push_back(num / m);
        }
        else if (factor == "m" || factor == "M") {
            sum.push_back(num);
        }
        else if (factor == "in") {
            sum.push_back(num * in / m);
        }
        else if (factor == "ft") {
            sum.push_back(num * ft * in / m);
        }
        else
            cout << "not a valid measure!" << '\n';

        sort(sum);

        cout << "The larger value so far: " << sum[sum.size() - 1] << '\n';
        
        cout << "The smaller value so far: " << sum[0] << '\n';
    }

    for (double x : sum)
        cout << x << '\n';
}

void mean_distance()
{
    // exercise 3
    // page 149
    vector<double> distance;		// distance
    for (double temp; cin >> temp;)	// read into tem p
        distance.push_back(temp);	// put distance into v ector
    //compute mean distance:
    double sum = 0;
    for (int x : distance) sum += x;
    cout << "Mean distance: " << sum / distance.size() << '\n';
    // compute median distance:
    sort(distance);

    cout << "Minimum distance: " << distance[0] << '\n';
    cout << "Maximum distance: " << distance[distance.size()-1] << '\n';
}

void num_guess_AI()
{
    // exercise 4
    // page 149
    // TODO

    char input = 0;
    int num = 0;
    int num_factor = 100;
    int selection_min = 0;
    int selection_max = 100;

    cout << "Think a number between 1 and 100, and I will try to guess, OK?\nPress enter to continue." << '\n';
    cin.ignore();

    int i = 0;
    while (i < 6) {
        num_factor = (selection_max - selection_min) / 2;
        num = selection_min + num_factor;

        cout << "Is the number you are thinking is less than " << num << ". y for yes, n for no." << '\n';
        cin >> input;
        if (input == 'y') {
            num_factor /= 2;
            selection_max = num;
            ++i;
        }
        else if (input == 'n') {
            num_factor /= 2;
            selection_min = num;
            ++i;
        }
        else {
            cout << "Error.";
        }
    }

    num_factor = (selection_max - selection_min) / 2;
    num = selection_min + num_factor;

    cout << "The number is: " << num << '\n';

    // TODO correct this code
}

void simple_calculator()
{
    // exercise 5
    // page 149

    double a, b;
    string operation = "";

    cout << "Enter two values and choose one of the four operations(+ - / *)";
    cin.ignore();

    while (cin >> a >> b >> operation) {
        if (operation == "+")
            cout << a + b << '\n';
        else if (operation == "-")
            cout << a - b << '\n';
        else if (operation == "*")
            cout << a * b << '\n';
        else if (operation == "/")
            cout << a / b << '\n';
        else
            cout << "Error, unknown operation?!" << '\n';
    }
}

void digits_to_spell()
{
    // exercise 6
    // page149

    string number;
    bool flag = 0;

    vector<string> l_numbers = { "zero", "one", "two", "three", "four",
                                 "five", "six", "seven", "eight", "nine" };
    vector<string> d_numbers = { "0", "1", "2", "3", "4",
                                 "5", "6", "7", "8", "9" };
    
    cout << "Enter a number: ";
    while (cin >> number) {
        for (int i = 0; i < l_numbers.size(); ++i)
        {
            if (number == l_numbers[i]) {
                cout << i << '\n';
                break;
            }
        }
        for (int i = 0; i < d_numbers.size(); ++i)
        {
            if (number == d_numbers[i]) {
                cout << l_numbers[i] << '\n';
                break;
            }
        }

        if (flag) {
            cout << "Error, unknown number";
        }
        cout << "Enter a number: ";
    }


}

void simple_calcultorv2()
{
    // exercise 7
    // page 149
    // TODO
}

void chess_reward()
{
    // exercise 8 and 9
    // page 149
    // TODO

    double grains = 0;
    int chess_squares = 64;

    for (int i = 0; i < chess_squares; ++i) {
        if (!grains)
            ++grains;
        grains += grains;
        cout << i + 1 << '\t' << grains << '\n';
    }
    /* What is the largest number of squares for which you can calculate the approximate number of grains(using a double) and (using a int) ?:
    int = 1073741824
    double = 1.84467e+19*/
}

void jokempo()
{
    // exercise 10
    // page 149
    // TODO
    int i = 0;
    vector<char> jokempo = { 'V', 'p', 'O' };
    cout << "Press enter to go: ";
    while (cin.get()) {
        cout << jokempo[i];
        ++i;
        if (i > 2)
            i = 0;
        cout << '\n' << "Press enter to go: ";
    }

}

bool is_prime(int number)
{
    // exercise 11 and 12
    // page 150

    if (number <= 1)
        return false;
    else if (number == 2)
        return true;

    for (int i = 2; i < number-1; ++i)
        if (number%i == 0)
            return false;
    return true;
}

bool is_multiple(int x, int y)
{
    // return true if x is multiple per y
    if (x % y == 0)
        return true;
    else
        return false;
}

bool sieve_eratosthenes(int number)
{
    // exercise 13
    // page 150
    // crivo de Eratóstenes

    vector<int> number_list;
    // vector map, maps the noon prime numbers.
    vector<bool> prime_map;
    bool prime_true = true;
    bool prime_false = false;
    constexpr int prime_begin = 2;

    if (number <= 1)
        return false;
    else if (number == 2)
        return true;

    for (int i = 1; i < number; ++i) {
        number_list.push_back(i);
        prime_map.push_back(prime_true);
    }
    int prime_index = 0;
    int near_prime = number_list[prime_index];
    int number_list_size = number_list.size();

    // if came to here the number was not discarted

    while (true) {
        if (number == near_prime)
            return true;
        else if (is_multiple(number, near_prime))
            return false;
        else
            ++prime_index;
        int i = prime_index;

        for (int i = prime_index; i < number_list_size; ++i) {
            if (is_multiple(number_list[i], near_prime)) {
                if (number == number_list[i])
                    return false;
                prime_map[i] = prime_false;
            }
        }
        near_prime = number_list[prime_index];
    }
}

void list_prime_numbers(int number)
{
    // exercise 11 and 12
    // page 149

    const int max = number;
    vector<int> prime_numbers;

    for (int i = 0; i < max; ++i) {
        if (sieve_eratosthenes(i)) {
            prime_numbers.push_back(i);
            cout << i << '\n';
        }
    }

    for (int x : prime_numbers)
        cout << x << '\n';
}

void prime_numbers_v2()
{
    // exercise 13 and 14
    // page 149
    // TODO
}

void first_prime()
{
    // exercise 15
    // finds the first prime number
    // page 149
    // TODO
}

void mode_num()
{
    // exercise 16
    // page 149
    // TODO
}

void mode_strings()
{
    // exercise 17
    // page 149
    // TODO
}

void quadratic_equations()
{
    // exercise 18
    // page 149
    // TODO
}

void name_score()
{
    // exercise 19, 20 21
    // page 150
    // TODO
}


int main()
{
    setlocale(LC_ALL, "portuguese"); // decodifica acentos em português
    //int n = 97;
    //cout << n << '\n' << sieve_eratosthenes(n) << '\n';
    list_prime_numbers(100);
    keep_window_open();
    return 1;
}
