class Number26082:
    def __init__(self, A_cost, A_spec, Warboy_cost):
        self.A_efficiency = A_spec / A_cost
        self.Warboy_cost = Warboy_cost

    def Sovle(self):
        return int(self.A_efficiency * 3 * self.Warboy_cost)


number26082 = Number26082(*map(int, input().split()))
print(number26082.Sovle())
