try:
    def f():
        try:
            res = int(7%0.0)
            return 40
        except Exception: return 9
        except KeyboardInterrupt: return 5
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
