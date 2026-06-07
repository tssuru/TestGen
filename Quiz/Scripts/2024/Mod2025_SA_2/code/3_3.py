try:
    def f():
        try:
            res = int("b2")
            return 43
        except ValueError: 
            return 9
        except ZeroDivisionError: 
            return 0
        else: return 33
        finally: return 23
        return res
    
    print(f())
except: print('error')
