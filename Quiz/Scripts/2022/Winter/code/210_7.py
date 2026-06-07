try:
    
    try:
        print(3, end="")
        print(int(4%3), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except Exception: 
        print(1, end="")
    else:
        print(6, end="")
    finally:
        print(2, end="")
    
except: print('error')
