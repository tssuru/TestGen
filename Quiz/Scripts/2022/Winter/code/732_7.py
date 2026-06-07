try:
    
    try:
        print(2, end="")
        print(int(7%2), end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except Exception: 
        print(1, end="")
    else:
        print(4, end="")
    finally:
        print(7, end="")
    
except: print('error')
