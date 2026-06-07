try:
    def f():
        try:
            res = int("1")
            return 44
        except ValueError: return 7
        except Exception: return 2
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
