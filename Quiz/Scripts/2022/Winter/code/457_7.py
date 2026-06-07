try:
    
    try:
        print(0, end="")
        print(int(8%3), end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except Exception: 
        print(4, end="")
    else:
        print(7, end="")
    finally:
        print(2, end="")
    
except: print('error')
