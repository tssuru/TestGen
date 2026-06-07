try:
    
    try:
        print(0, end="")
        print(5>7, end="")
        print(2, end="")
    except ValueError: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
