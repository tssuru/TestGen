try:
    def f():
        try:
            res = int("5")
            return 41
        except KeyboardInterrupt: return 9
        except ValueError: return 0
        else: return 34
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
