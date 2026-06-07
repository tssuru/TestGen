try:
    def f():
        try:
            res = 5!=0
        except KeyboardInterrupt: return 6
        except Exception: return 7
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
