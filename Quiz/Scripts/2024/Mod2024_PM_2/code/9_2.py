try:
    def f():
        try:
            res = int(1%1)
            return 40
        except ZeroDivisionError: return 2
        except TypeError: return 9
        return res
    
    print(f())
    
except: print('error')
