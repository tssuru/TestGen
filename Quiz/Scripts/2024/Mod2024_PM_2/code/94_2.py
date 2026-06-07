try:
    def f():
        try:
            res = 6<=5
        except KeyboardInterrupt: return 9
        except Exception: return 4
        return res
    
    print(f())
    
except: print('error')
