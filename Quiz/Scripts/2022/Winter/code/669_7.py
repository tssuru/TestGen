try:
    
    try:
        print(2, end="")
        print(int(9//1), end="")
        print(3, end="")
    except Exception: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(1, end="")
    
except: print('error')
