try:
    def f():
        try:
            res = int("5")
        except TypeError: return 4
        except ZeroDivisionError: return 0
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
