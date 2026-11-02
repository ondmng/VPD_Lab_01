% Student information: a fact
student(
    "Anastas Galchev",
    "Галчев Анастас Аристотелевич",
    "М3О-104БВ-26",
    7
).

% Rule for calculating the control value
control_value(Number, Value) :-
    Value is 304 * Number.

% Main program
main :-
    student(NameEn, NameRu, Group, Number),
    format(string(StudentID), '~w/~|~`0t~d~2+', [Group, Number]),
    control_value(Number, Control),
    format('Hello, ~s!~n', [NameEn]),
    format('Привет, ~s!~n', [NameRu]),
    format('Student ID: ~s~n', [StudentID]),
    format('Language:   Prolog~n'),
    format('Control:    ~d~n', [Control]).

:- initialization(main, main).