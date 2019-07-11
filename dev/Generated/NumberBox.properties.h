// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class NumberBoxProperties
{
public:
    NumberBoxProperties();

    void BasicValidationMode(winrt::NumberBoxBasicValidationMode const& value);
    winrt::NumberBoxBasicValidationMode BasicValidationMode();

    void FractionDigits(int value);
    int FractionDigits();

    void Header(winrt::hstring const& value);
    winrt::hstring Header();

    void HyperScrollEnabled(bool value);
    bool HyperScrollEnabled();

    void IncrementPrecision(int value);
    int IncrementPrecision();

    void IntegerDigits(int value);
    int IntegerDigits();

    void IsDecimalPointAlwaysDisplayed(bool value);
    bool IsDecimalPointAlwaysDisplayed();

    void IsZeroSigned(bool value);
    bool IsZeroSigned();

    void MaxValue(double value);
    double MaxValue();

    void MinMaxMode(winrt::NumberBoxMinMaxMode const& value);
    winrt::NumberBoxMinMaxMode MinMaxMode();

    void MinValue(double value);
    double MinValue();

    void NumberRounder(winrt::NumberBoxNumberRounder const& value);
    winrt::NumberBoxNumberRounder NumberRounder();

    void RoundingAlgorithm(winrt::RoundingAlgorithm const& value);
    winrt::RoundingAlgorithm RoundingAlgorithm();

    void SignificantDigitPrecision(double value);
    double SignificantDigitPrecision();

    void SignificantDigits(int value);
    int SignificantDigits();

    void SpinButtonPlacementMode(winrt::NumberBoxSpinButtonPlacementMode const& value);
    winrt::NumberBoxSpinButtonPlacementMode SpinButtonPlacementMode();

    void StepFrequency(double value);
    double StepFrequency();

    void Value(double value);
    double Value();

    static winrt::DependencyProperty BasicValidationModeProperty() { return s_BasicValidationModeProperty; }
    static winrt::DependencyProperty FractionDigitsProperty() { return s_FractionDigitsProperty; }
    static winrt::DependencyProperty HeaderProperty() { return s_HeaderProperty; }
    static winrt::DependencyProperty HyperScrollEnabledProperty() { return s_HyperScrollEnabledProperty; }
    static winrt::DependencyProperty IncrementPrecisionProperty() { return s_IncrementPrecisionProperty; }
    static winrt::DependencyProperty IntegerDigitsProperty() { return s_IntegerDigitsProperty; }
    static winrt::DependencyProperty IsDecimalPointAlwaysDisplayedProperty() { return s_IsDecimalPointAlwaysDisplayedProperty; }
    static winrt::DependencyProperty IsZeroSignedProperty() { return s_IsZeroSignedProperty; }
    static winrt::DependencyProperty MaxValueProperty() { return s_MaxValueProperty; }
    static winrt::DependencyProperty MinMaxModeProperty() { return s_MinMaxModeProperty; }
    static winrt::DependencyProperty MinValueProperty() { return s_MinValueProperty; }
    static winrt::DependencyProperty NumberRounderProperty() { return s_NumberRounderProperty; }
    static winrt::DependencyProperty RoundingAlgorithmProperty() { return s_RoundingAlgorithmProperty; }
    static winrt::DependencyProperty SignificantDigitPrecisionProperty() { return s_SignificantDigitPrecisionProperty; }
    static winrt::DependencyProperty SignificantDigitsProperty() { return s_SignificantDigitsProperty; }
    static winrt::DependencyProperty SpinButtonPlacementModeProperty() { return s_SpinButtonPlacementModeProperty; }
    static winrt::DependencyProperty StepFrequencyProperty() { return s_StepFrequencyProperty; }
    static winrt::DependencyProperty ValueProperty() { return s_ValueProperty; }

    static GlobalDependencyProperty s_BasicValidationModeProperty;
    static GlobalDependencyProperty s_FractionDigitsProperty;
    static GlobalDependencyProperty s_HeaderProperty;
    static GlobalDependencyProperty s_HyperScrollEnabledProperty;
    static GlobalDependencyProperty s_IncrementPrecisionProperty;
    static GlobalDependencyProperty s_IntegerDigitsProperty;
    static GlobalDependencyProperty s_IsDecimalPointAlwaysDisplayedProperty;
    static GlobalDependencyProperty s_IsZeroSignedProperty;
    static GlobalDependencyProperty s_MaxValueProperty;
    static GlobalDependencyProperty s_MinMaxModeProperty;
    static GlobalDependencyProperty s_MinValueProperty;
    static GlobalDependencyProperty s_NumberRounderProperty;
    static GlobalDependencyProperty s_RoundingAlgorithmProperty;
    static GlobalDependencyProperty s_SignificantDigitPrecisionProperty;
    static GlobalDependencyProperty s_SignificantDigitsProperty;
    static GlobalDependencyProperty s_SpinButtonPlacementModeProperty;
    static GlobalDependencyProperty s_StepFrequencyProperty;
    static GlobalDependencyProperty s_ValueProperty;

    winrt::event_token ValueChanged(winrt::TypedEventHandler<winrt::NumberBox, winrt::IInspectable> const& value);
    void ValueChanged(winrt::event_token const& token);

    event_source<winrt::TypedEventHandler<winrt::NumberBox, winrt::IInspectable>> m_valueChangedEventSource;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnBasicValidationModePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnFractionDigitsPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnHeaderPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnHyperScrollEnabledPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIncrementPrecisionPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIntegerDigitsPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsDecimalPointAlwaysDisplayedPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsZeroSignedPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMaxValuePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMinMaxModePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMinValuePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnNumberRounderPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnRoundingAlgorithmPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSignificantDigitPrecisionPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSignificantDigitsPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSpinButtonPlacementModePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnStepFrequencyPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnValuePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
