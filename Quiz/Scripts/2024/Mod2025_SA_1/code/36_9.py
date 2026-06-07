try:
    a,b,c=0,8,9
    def h(b):
        a=4
        b+=2
        c=5
        return a+b+c
    
    a,b,c=7,6,5
    print(h(a),a,b,c)
except: print('error')
