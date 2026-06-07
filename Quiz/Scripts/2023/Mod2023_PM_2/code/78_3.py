try:
    def f():
        try:
            res = int("3")
            return 41
        except ValueError: return 5
        except TypeError: return 2
        return res
    
    print(f())
    
except: print('error')
