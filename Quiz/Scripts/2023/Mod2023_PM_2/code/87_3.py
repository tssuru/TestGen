try:
    def f():
        try:
            res = int("8")
            return 40
        except KeyboardInterrupt: return 9
        except Exception: return 8
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
