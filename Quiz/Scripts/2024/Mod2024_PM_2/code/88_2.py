try:
    def f():
        try:
            res = int("0")
        except TypeError: return 3
        except ZeroDivisionError: return 2
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
