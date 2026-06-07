try:
    def f():
        try:
            res = int("c3")
            return 43
        except Exception: return 1
        except ValueError: return 6
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
