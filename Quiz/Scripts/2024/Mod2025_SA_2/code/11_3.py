try:
    def f():
        try:
            res = int("a4")
            return 41
        except ZeroDivisionError: 
            return 6
        except TypeError: 
            return 9
        else: return 34
        return res
    
    print(f())
except: print('error')
