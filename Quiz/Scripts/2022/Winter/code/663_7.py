try:
    
    try:
        print(3, end="")
        print(int(5/0), end="")
        print(2, end="")
    except Exception: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(5, end="")
    
except: print('error')
