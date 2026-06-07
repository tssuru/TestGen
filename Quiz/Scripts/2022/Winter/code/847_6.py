try:
    a,b,c=7,2,5
    def h(a):
        a=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=4,8,6
    print(h(a),a,b,c)
    
except: print('error')
