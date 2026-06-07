try:
    def f():
        try:
            res = int("9")
        except Exception: 
            return 0
        except KeyboardInterrupt: 
            return 4
        finally: return 20
        return res
    
    print(f())
except: print('error')
