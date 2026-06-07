try:
    def f():
        try:
            res = int("2")
            return 42
        except Exception: return 4
        except KeyboardInterrupt: return 1
        else: return 34
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
