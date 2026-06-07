try:
    a,b,c=5,7,9
    def h(a):
        a=2
        b=1
        c=5
        return a+b+c
    
    a,b,c=4,8,7
    print(h(a),a,b,c)
except: print('error')
