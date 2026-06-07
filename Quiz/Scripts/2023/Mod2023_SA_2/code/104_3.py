try:
    def f():
        try:
            res = int("9")
            return 41
        except KeyboardInterrupt: return 9
        except Exception: return 7
        else: return 34
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
