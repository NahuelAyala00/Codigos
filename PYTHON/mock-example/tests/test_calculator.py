import pytest
from src.calculator import Calculator

def test_add_normal():
    calculator = Calculator()
    result = calculator.add(2, 3)
    assert result == 5

def test_add_with_mock(mocker):
    mocker.patch("src.calculator.Calculator.add", return_value=5)
    calculator = Calculator()
    assert calculator.add(2, 3) == 5
