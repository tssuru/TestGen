try:
    def f():
        try:
            res = int("0")
        except ValueError: return 0
        except TypeError: return 7
        else: return 30
        return res
    
    print(f())
    
except: print('error')
