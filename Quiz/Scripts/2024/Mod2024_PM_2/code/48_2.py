try:
    def f():
        try:
            res = int("3")
        except Exception: return 2
        except KeyboardInterrupt: return 4
        return res
    
    print(f())
    
except: print('error')
