float DistanceCalc(const FVector& TraceStart, const FVector& ImpactPoint)
{
    return FVector::Distance(TraceStart, ImpactPoint);
}

float Distance = DistanceCalc(TraceStart, ImpactPoint);