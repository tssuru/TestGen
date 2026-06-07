try:
    def f():
        try:
            res = int("7")
        except ZeroDivisionError: return 6
        except TypeError: return 5
        return res
    
    print(f())
    
except: print('error')
