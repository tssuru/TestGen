try:
    def f():
        try:
            res = 5>1
        except ZeroDivisionError: return 6
        except Exception: return 0
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
