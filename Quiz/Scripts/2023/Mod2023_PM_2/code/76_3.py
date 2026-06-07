try:
    def f():
        try:
            res = 2<=9
            return 40
        except Exception: return 8
        except ZeroDivisionError: return 5
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
