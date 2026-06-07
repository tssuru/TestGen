try:
    
    try:
        print(8, end="")
        print(int(6//2), end="")
        print(7, end="")
    except ValueError: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    else:
        print(5, end="")
    finally:
        print(7, end="")
    
except: print('error')
