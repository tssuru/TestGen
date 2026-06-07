try:
    
    try:
        print(6, end="")
        print(int(9//3), end="")
        print(4, end="")
    except ValueError: 
        print(8, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(0, end="")
    finally:
        print(7, end="")
    
except: print('error')
