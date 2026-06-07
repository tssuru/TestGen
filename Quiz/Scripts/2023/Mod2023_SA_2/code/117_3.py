try:
    def f():
        try:
            res = int("b3")
            return 41
        except KeyboardInterrupt: return 2
        except Exception: return 1
        else: return 31
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
