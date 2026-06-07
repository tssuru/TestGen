try:
    
    try:
        print(4, end="")
        print(int(5%3), end="")
        print(0, end="")
    except Exception: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    else:
        print(1, end="")
    finally:
        print(8, end="")
    
except: print('error')
