try:
    def f():
        try:
            res = 9==1
            return 42
        except ZeroDivisionError: return 5
        except TypeError: return 3
        else: return 34
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
