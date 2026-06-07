try:
    def f():
        try:
            res = int("0")
            return 40
        except ZeroDivisionError: return 4
        except ValueError: return 8
        else: return 33
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
