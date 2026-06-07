try:
    def f():
        try:
            res = int(2/0.0)
        except ValueError: return 8
        except ZeroDivisionError: return 4
        else: return 34
        return res
    
    print(f())
    
except: print('error')
