try:
    def f():
        try:
            res = int("b9")
            return 40
        except ValueError: return 8
        except ZeroDivisionError: return 4
        else: return 30
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
