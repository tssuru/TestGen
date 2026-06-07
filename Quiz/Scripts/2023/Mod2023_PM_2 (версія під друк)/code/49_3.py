try:
    def f():
        try:
            res = int("c2")
        except ZeroDivisionError: return 9
        except Exception: return 7
        else: return 31
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
