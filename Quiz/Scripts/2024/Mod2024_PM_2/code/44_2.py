try:
    def f():
        try:
            res = int("1")
            return 41
        except TypeError: return 2
        except ValueError: return 7
        else: return 31
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
