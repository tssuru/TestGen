try:
    def f():
        try:
            res = 9<=6
        except ZeroDivisionError: return 0
        except Exception: return 8
        else: return 33
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
