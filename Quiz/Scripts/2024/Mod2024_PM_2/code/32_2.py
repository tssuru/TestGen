try:
    def f():
        try:
            res = int("2")
            return 40
        except ValueError: return 6
        except TypeError: return 7
        return res
    
    print(f())
    
except: print('error')
