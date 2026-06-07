try:
    def f():
        try:
            res = int("c4")
            return 45
        except ZeroDivisionError: 
            return 2
        except Exception: 
            return 5
        else: return 30
        finally: return 21
        return res
    
    print(f())
except: print('error')
