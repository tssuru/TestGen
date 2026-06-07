try:
    def f():
        try:
            res = int("b6")
        except ZeroDivisionError: return 8
        except Exception: return 3
        else: return 33
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
