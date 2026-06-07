try:
    
    try:
        print(3, end="")
        print(9<=4, end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(0, end="")
    finally:
        print(7, end="")
    
except: print('error')
