try:
    def f():
        try:
            res = int(1//1)
        except TypeError: return 9
        except ZeroDivisionError: return 7
        return res
    
    print(f())
    
except: print('error')
