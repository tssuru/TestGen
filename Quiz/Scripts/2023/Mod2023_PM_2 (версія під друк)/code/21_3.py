try:
    def f():
        try:
            res = int("6")
        except TypeError: return 1
        except ValueError: return 3
        else: return 33
        return res
    
    print(f())
    
except: print('error')
