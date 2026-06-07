try:
    def f():
        try:
            res = int("c3")
            return 41
        except KeyboardInterrupt: return 4
        except ValueError: return 2
        else: return 32
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
